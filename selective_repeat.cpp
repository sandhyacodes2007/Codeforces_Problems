#include <iostream>
using namespace std;

int main() {
    
    int totalFrames, windowSize;
    
    cout << "Enter total number of frames: ";
    cin >> totalFrames;
    
    cout << "Enter window size: ";
    cin >> windowSize;

    int ack[100] = {0};   // to store acknowledgment status

    for(int i = 0; i < totalFrames; i++) {

        if(ack[i] == 0) {

            cout << "\nSending Frame " << i << endl;

            int status;
            cout << "Is frame received? (1 = Yes, 0 = No): ";
            cin >> status;

            if(status == 1) {
                cout << "ACK received for Frame " << i << endl;
                ack[i] = 1;
            }
            else {
                cout << "Frame " << i << " lost. Retransmitting...\n";
                i--;   // resend same frame
            }
        }
    }

    cout << "\nAll frames transmitted successfully.\n";

    return 0;
}