#include <stdio.h>

// tram trau tram bo co
// trau dung an nam
// trau nam an ba
// lu khu trau gia
// 3 con 1 bo

int main()
{
    int count=0;
    for (int tdung = 1; tdung < 20; tdung++)
    {
        for (int tnam = 1; tnam < 34; tnam++) 
        {
            //printf("count = %d\n", count++);
            int tgia = 100 - (tdung + tnam);
            // thu tu uu tien
            // 1. cac phep toan so hoc
            // 2. cac phep toan so sanh
            // 3. cac phep toan logic
            if (5 * tdung + 3 * tnam + tgia / 3 == 100 && tgia % 3 == 0)
            {
                printf("trau dung = %d, trau nam = %d, trau gia = %d\n",
                    tdung, tnam, tgia);
            }
        }
    }
}
