#include <windows.h>

int main(void)
{
    int result = MessageBox(
        NULL,
        "So, you downloaded this software. Interesting! But I have one question:\nAre you going to code in the next 10 years?",
        "Question",
        MB_YESNO
    );

    if (result == IDYES)
    {
        MessageBox(NULL, "GOOD BOY", "Result", MB_OK);
    }
    else
    {
        MessageBox(NULL, "WRONG ANSWER", "Result", MB_OK);
    }

    return 0;
}