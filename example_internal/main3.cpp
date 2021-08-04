#include <moteusapi/MoteusAPI.h>

#include <chrono>
#include <thread>

int main() {
  string dev_name("/dev/tty.usbmodemBE6118CD1");
  int moteus_id = 1;
  MoteusAPI api(dev_name, moteus_id);

  api.SendPositionCommand(-1, 0.3, 0.3);
  this_thread::sleep_for(chrono::milliseconds(3000));

  for (int jj = 0; jj < 3; jj++)
    for (int ii = -314; ii < 314; ii++) {
      api.SendPositionCommand(cos(ii * 0.01), 3, 3);
      this_thread::sleep_for(chrono::milliseconds(3));
    }
  return 0;
}