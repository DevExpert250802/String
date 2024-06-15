/*
A complex number can be represented as a string on the form "real+imaginaryi" where:

real is the real part and is an integer in the range [-100, 100].
imaginary is the imaginary part and is an integer in the range [-100, 100].
i2 == -1.
Given two complex numbers num1 and num2 as strings, return a string of the complex number that represents their multiplications.

 

Example 1:

Input: num1 = "1+1i", num2 = "1+1i"
Output: "0+2i"
Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.

Example 2:
Input: num1 = "1+-1i", num2 = "1+-1i"
Output: "0+-2i"
Explanation: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.

*/


class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        stringstream ss1(num1), ss2(num2) ,ans;
        char justtoskip;
        int real_a,img_a,real_b,img_b;

        ss1>>real_a>>justtoskip>>img_a>>justtoskip;
        ss2>>real_b>>justtoskip>>img_b>>justtoskip;

        int real_result = real_a * real_b - img_a * img_b;
        int img_result = real_a * img_b + real_b * img_a;

        ans << real_result << "+" << img_result << "i";
//The str() method of the stringstream object returns the accumulated string.
        return ans.str();
    }
};
