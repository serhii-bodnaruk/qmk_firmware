//Initialize tap structure associated with example tap dance key
static tap lalt_pipe_tap_state = {
  .is_press_action = true,
  .state = 0
};

//Functions that control what our tap dance key does
void lalt_pipe_finished (qk_tap_dance_state_t *state, void *user_data) {
  lalt_pipe_tap_state.state = cur_dance(state);
  switch (lalt_pipe_tap_state.state) {
    case SINGLE_TAP:
      override_key(KC_PIPE, KC_BSLS);
      break;
    case SINGLE_HOLD:
      register_code(KC_LALT);
      break;
  }
}

void lalt_pipe_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (lalt_pipe_tap_state.state) {
    case SINGLE_HOLD:
      unregister_code(KC_LALT);
      break;
  }
  lalt_pipe_tap_state.state = 0;
}
