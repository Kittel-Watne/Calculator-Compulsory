#pragma once

/// <summary>
/// Errorhandling for inputs requiring integers
/// </summary>
/// <returns>Input</returns>
int GetInteger()
{
    int input;
    bool fail = true;

    do
    {
        std::cin >> input;

        // Error handling for cin
        if (std::cin.fail())
        {
            std::cout << "Please enter numbers only \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            fail = false;
        }
    } while (fail);

    return input;
}


/// <summary>
/// Recursively finds the factorial of N
/// </summary>
/// <param name="N"></param>
/// <returns>Factorial of N as long int</returns>
long int Factorial(int N) {
	if (N == 1 || N == 0) {
		return 1;
	}
	else {
		return(N * Factorial(N - 1));
	}
}


/// <summary>
/// Adds up 2 usercreated arrays and prints them out as a polynomialfunction
/// </summary>
void polyAddition() {
    int i;
    int mArray1[4];
    int mArray2[4];
    int finalArray[4];

    //Getting input for array 1 and printing it out
    std::cout << "Write your numbers for the first polynomial function:\n";
    for (i = 0; i < 4; i++) {
        mArray1[i] = GetInteger();
    }
    for (i = 0; i < 2; i++) {
        std::cout << mArray1[i] << "x^" << 3 - i << " + ";
    }
    std::cout << mArray1[i] << "x + ";
    i++;
    std::cout << mArray1[i] << "\n";

    //getting input for array 2 and printing it out
    std::cout << "Write your numbers for the second polynomial function:\n";
    for (i = 0; i < 4; i++) {
        mArray2[i] = GetInteger();
    }
    for (i = 0; i < 2; i++) {
        std::cout << mArray2[i] << "x^" << 3 - i << " + ";
    }
    std::cout << mArray2[i] << "x + ";
    i++;
    std::cout << mArray2[i] << "\n";

    //Doing the addition between the 2 arrays 
    for (i = 0; i < 4; i++) {
        finalArray[i] = mArray1[i] + mArray2[i];
    }
    //printing the final array
    for (i = 0; i < 2; i++) {
        std::cout << finalArray[i] << "x^" << 3 - i << " + ";
    }
    std::cout << finalArray[i] << "x + ";
    i++;
    std::cout << finalArray[i] << "\n";

    return;
}

/// <summary>
/// Subtracts one usercreated array from another and prints the result out as a polynomialfunction
/// </summary>
void polySubtraction() {
    int i;
    int mArray1[4];
    int mArray2[4];
    int finalArray[4];

    //Getting input for array 1 and printing it out
    std::cout << "Write your numbers for the first polynomial function:\n";
    for (i = 0; i < 4; i++) {
        mArray1[i] = GetInteger();
    }
    for (i = 0; i < 2; i++) {
        std::cout << mArray1[i] << "x^" << 3 - i << " + ";
    }
    std::cout << mArray1[i] << "x + ";
    i++;
    std::cout << mArray1[i] << "\n";

    //getting input for array 2 and printing it out
    std::cout << "Write your numbers for the second polynomial function:\n";
    for (i = 0; i < 4; i++) {
        mArray2[i] = GetInteger();
    }
    for (i = 0; i < 2; i++) {
        std::cout << mArray2[i] << "x^" << 3 - i << " + ";
    }
    std::cout << mArray2[i] << "x + ";
    i++;
    std::cout << mArray2[i] << "\n";

    //Doing the subtraction between the 2 arrays 
    for (i = 0; i < 4; i++) {
        finalArray[i] = mArray1[i] - mArray2[i];
    }
    //printing the final array
    for (i = 0; i < 2; i++) {
        std::cout << finalArray[i] << "x^" << 3 - i << " + ";
    }
    std::cout << finalArray[i] << "x + ";
    i++;
    std::cout << finalArray[i] << "\n";

    return;
}


/// <summary>
/// Multiplies 2 usercreated arrays and prints them out as a polynomialfunction
/// </summary>
void polyMultiply() {
    int i;
    int j;
    int k;
    int mArray1[4];
    int mArray2[4];
    int finalArray[7] = { 0, 0, 0, 0, 0, 0, 0 };

    //Getting input for array 1 and printing it out
    std::cout << "Write your numbers for the first polynomial function:\n";
    for (i = 0; i < 4; i++) {
        mArray1[i] = GetInteger();
    }
    for (i = 0; i < 2; i++) {
        std::cout << mArray1[i] << "x^" << 3 - i << " + ";
    }
    std::cout << mArray1[i] << "x + ";
    i++;
    std::cout << mArray1[i] << "\n";

    //getting input for array 2 and printing it out
    std::cout << "Write your numbers for the second polynomial function:\n";
    for (i = 0; i < 4; i++) {
        mArray2[i] = GetInteger();
    }
    for (i = 0; i < 2; i++) {
        std::cout << mArray2[i] << "x^" << 3 - i << " + ";
    }
    std::cout << mArray2[i] << "x + ";
    i++;
    std::cout << mArray2[i] << "\n";

    //Calculating the values for the product array
    for (j = 0; j < 4; j++) {
        for (k = 0; k < 4; k++) {
            int index = j + k;
            finalArray[index] += mArray1[j] * mArray2[k];
        }
    }
    //Printing the product array
    std::cout << "The product is:\n";
    for (i = 0; i < 5; i++) {
        std::cout << finalArray[i] << "x^" << 6 - i << " + ";
    }
    std::cout << finalArray[i] << "x + ";
    i++;
    std::cout << finalArray[i] << "\n";
    return;
}

/// <summary>
/// Finds the derivative of a usercreated polynomialfunction
/// </summary>
void polyDerive() {
    int i;
    int newArray[4];

    std::cout << "Write in your numbers for the polynomial function:\n";
    for (i = 0; i < 4; i++) {
        newArray[i] = GetInteger();
    }
    //Prints the inputted array
    for (i = 0; i < 2; i++) {
        std::cout << newArray[i] << "x^" << 3 - i << " + ";
    }
    std::cout << newArray[i] << "x + ";
    i++;
    std::cout << newArray[i] << "\n";
    //prints the derivative of the array
    std::cout << "The derivative of the polynomialfunction is: \n";
    for (i = 0; i < 1; i++) {
        std::cout << newArray[i] << "x^" << 2 - i << " + ";
    }
    std::cout << newArray[i] << "x + ";
    i++;
    std::cout << newArray[i] << "\n";

    return;
}
/// <summary>
/// Adds 2 userinputted integers together and returns the final value
/// </summary>
/// <returns>userinput + userinput</returns>
int addition() {
    return GetInteger() + GetInteger();
}
/// <summary>
/// Subtracts one userinputted integer from another and returns the final value
/// </summary>
/// <returns>userinput - userinput</returns>
int subtraction() {
    return GetInteger() - GetInteger();
}
/// <summary>
/// Multiplies 2 userinputted integers together and returns the final value
/// </summary>
/// <returns>userinput * userinput</returns>
int multiplication() {
    return GetInteger() * GetInteger();
}
/// <summary>
/// Divides one userinput by another and returns final value as float
/// </summary>
/// <returns>userinput / userinput</returns>
float division() {
    return float(GetInteger()) / GetInteger();
}