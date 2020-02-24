//Associate our tap dance key with its functionality
qk_tap_dance_action_t tap_dance_actions[] = {
  [LALT_PIPE] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, lalt_pipe_finished, lalt_pipe_reset, 100)
};
