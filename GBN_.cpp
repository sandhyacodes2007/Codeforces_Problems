
#include <iostream>
using namespace std;

int main()
{
    int frames, window, i = 0;

    cout << "Enter total number of frames: ";
    cin >> frames;

    cout << "Enter window size: ";
    cin >> window;

    while (i < frames)
    {
        cout << "\nFrames sent: ";

        for (int j = i; j < i + window && j < frames; j++)
        {
            cout << j << " ";
        }

        int lost;
        cout << "\nEnter the frame number lost (-1 if none): ";
        cin >> lost;

        if (lost == -1)
        {
            cout << "All frames acknowledged\n";
            i = i + window;
        }
        else
        {
            cout << "Frame " << lost << " lost\n";
            cout << "Resending from frame " << lost << endl;
            i = lost;   // Go back to lost frame
        }
    }

    cout << "\nTransmission Completed\n";

    return 0;
}