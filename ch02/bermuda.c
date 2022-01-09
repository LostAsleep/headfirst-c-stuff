#include <stdio.h>


// The arguments will store pointers so they nee dto be int *.
void go_south_east(int * lat, int * lon)
{
        // *lat can read the old value and set the new value.
        *lat = *lat + 1;
        // *lon can read the old value and set the new value.
        *lon = *lon + 1;
}


int main() {
        int latitude = 32;
        int longitude = -64;
        // You need to find the address of the latitude and longitude variables with &.
        go_south_east(&latitude, &longitude);
        printf("Avast! Now at : [%i, %i]\n", latitude, longitude);
        return 0;
}
