#include <moteusapi/MoteusAPI.h>

int main() {
  // replace /dev/tty.usbmodemBE6118CD1 with your own usbcan dev name
  string dev_name("/dev/ttyACM0");
  int moteus_id = 1;
  MoteusAPI api(dev_name, moteus_id);

  // send one position with speed and torque limits
  double stop_position = NAN;
  double velocity = 2;
  double sinusoidal_amplitude = 0.3;
  double sinusoidal_phase = 0.0;
  double max_torque = 0.1;
  double feedforward_torque = 0;
  
  api.SendSinusoidalPositionCommand(stop_position, velocity, max_torque, sinusoidal_amplitude, sinusoidal_phase,
                          feedforward_torque);

  return 0;
}
