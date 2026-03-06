#include <stdio.h>

//Equation for Calculating is BMI = (weight (kg) ÷ height²)x10000 (imperial units) 
//We do x 10000 for making height from m to cm!
    
int main () {
    float weight,height,bmi;

    printf("Please enter your weight(in kg): ");
    scanf("%f",&weight);
    printf("Please enter your height(in cm): \n");
    scanf("%f",&height);

bmi = (weight/(height*height))*10000;

printf("Your Bmi is %.2f\n",bmi);

if (bmi<18.5){
    printf("U are underweight \n");
}
else if(bmi>=18.5 && bmi<=24.9){
    printf("Normal (healthy range)\n");
}
else if(bmi>=25 && bmi<=29.9){
    printf("Overweight\n");
}
else if(bmi>=30 && bmi<=34.9){
    printf("Obese (Class 1)\n");
}
else if(bmi>=35 && bmi<=39.9){
    printf("Obese (Class 2)\n");
}
else{
    printf("Severe obesity (Class 3)\n");
}

return 0;
}