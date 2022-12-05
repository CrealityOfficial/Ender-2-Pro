
#include "../../inc/MarlinConfig.h"
#include "indirection.h"

void restore_stepper_drivers() {
  TERN_(HAS_TRINAMIC_CONFIG, restore_trinamic_drivers());
}

void reset_stepper_drivers() {
  #if HAS_DRIVER(TMC26X)
    tmc26x_init_to_defaults();
  #endif
  TERN_(HAS_L64XX, L64xxManager.init_to_defaults());
  TERN_(HAS_TRINAMIC_CONFIG, reset_trinamic_drivers());
}

#if ENABLED(SOFTWARE_DRIVER_ENABLE)
  // Flags to optimize XYZ Enabled state
  xyz_bool_t axis_sw_enabled; // = { false, false, false }
#endif
