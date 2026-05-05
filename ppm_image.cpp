#include <iostream>
// program generates a PPM image with a gradient from black to red and green.
int main() {
    //image
    int image_width = 256;
    int image_height = 256;

    //render, P3 means colors are in ascii, 255 is the max value for each color
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int j = 0; j < image_height; j++) {
        for(int i = 0; i < image_width; i++) {
            auto r = double(i) / (image_width - 1); // col number, 0 to 255, divided by 255, so r is between 0 and 1
            auto g = double(j) / (image_height - 1); // row number, 0 to 255, divided by 255, so g is between 0 and 1
            auto b = 0.0;

            // convert to int, 0 to 255, and write the translated [0,255] value of each color component
            int ir = int(255.999 * r); 
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
}