# Letter Combinations of a Phone Number
[Link.](https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/)

**Describtion**:

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

**Complexity of solution**:

Memory: *O*(*number of generated strings*) where we can count *number of generated strings* using DIGIT_TO_SYMBOL variable.

Time: *O*(*4^n*) with base 10 logarithm. 