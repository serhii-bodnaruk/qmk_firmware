rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

int active_layer;
uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    switch (layer) {
      case 1:
        active_layer = 1;
        break;
      case 2:
        active_layer = 2;
        break;
      case 3:
        active_layer = 3;
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      default:
        active_layer = 0;
        break;
    }
    switch (layer) {
      case 0:
        /* rgblight_mode(5); */
        /*  */
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(5);
          rgblight_sethsv_noeeprom(132,255,251);
        }
        break;
      case 1:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(5);
          rgblight_sethsv_noeeprom(7,255,255);
        }
        break;
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(15);
          rgblight_sethsv_noeeprom(131,255,255);
        }
        break;
      case 3:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(24);
          rgblight_sethsv_noeeprom(176,255,255);
        }
        break;
      case 4:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(20);
          rgblight_sethsv_noeeprom(190,255,85);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};
