# Body_fat_calculator
Calculate your body fat percentage using the U.S. Navy formula

## Run the programm
Compile the file e.g. by using the followings commands in your Unix shell 
```
$ g++ -c body_fat.cc
$ g++ -o body_fat body_fat.o
```
Afterwards you can execute the program using
```
$ ./body_fat.cc
```
When run it will ask you for your gender (type `m` for male and `f` for female) and then for the your abdomen, neck length and height as well for the length of your hips if you are female. Type the respective values in order using centimeters (cm).
After this it will print out your body fat percentage rounded off to whole numbers.
