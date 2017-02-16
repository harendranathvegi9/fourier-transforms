/* 
The discrete Fourier transform (DFT) converts a finite list of equally spaced samples of a function into the list 
of coefficients of a finite combination of complex sinusoids, ordered by their frequencies, that has those same sample values. 
It can be said to convert the sampled function from its original domain (often time or position along a line) 
to the frequency domain.
*/

    #include<stdio.h>

    #include<math.h>

    #define PI 3.14159265

    int k = 20;

     

    struct DFT_Coefficient {

        double real, img;

    };

     

    int main(int argc, char **argv) {

        int N = 10;

        float a, b, c;

        int i, j;

        struct DFT_Coefficient dft_val[k];

        double cosine[N];

        double sine[N];

     

        printf("Discrete Fourier Transform using naive method\n");

        printf("Enter the coefficient of simple linear function:\n");

        printf("ax + by = c\n");

        scanf("%f", &a);

        scanf("%f", &b);

        scanf("%f", &c);

        double function[N];

        for (i = 0; i < N; i++) {

            function[i] = (((a * (double) i) + (b * (double) i)) - c);

            //System.out.print( "  "+function[i] + "  ");

        }

        for (i = 0; i < N; i++) {

            cosine[i] = cos((2 * i * k * PI) / N);

            sine[i] = sin((2 * i * k * PI) / N);

        }

     

        printf("The coefficients are: ");

        for (j = 0; j < k; j++) {

            for (i = 0; i < N; i++) {

                dft_val[j].real += function[i] * cosine[i];

                dft_val[j].img += function[i] * sine[i];

            }

            printf("( %e ) - ( %e i)\n", dft_val[j].real, dft_val[j].img);

        }

        return 0;

    }
