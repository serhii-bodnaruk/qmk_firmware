void switch_layout(void) {
  register_code16(KC_LGUI);
  register_code16(KC_SPACE);
  unregister_code16(KC_LGUI);
  unregister_code16(KC_SPACE);
  if (active_layer==QW) {layer_off(QW);}
  else layer_on(QW);
}
