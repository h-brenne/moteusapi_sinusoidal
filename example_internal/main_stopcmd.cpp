#include <moteusapi/MoteusAPI.h>

int main() {
  // replace /dev/tty.usbmodemBE6118CD1 with your own usbcan dev name
  string dev_name("/dev/ttyACM0");
  int moteus_id = 1;
  MoteusAPI api(dev_name, moteus_id);

  // send one stop command
  api.SendStopCommand();

  return 0;
}