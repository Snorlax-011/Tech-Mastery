# Two's Complement:

## Decimal System:
`69420 = 6*(10^(4)) + 9*(10^(3)) + 4*(10^(2)) + 2*(10^(1)) + 0*(10^(0))`
The Place values: 1(=10^0), 10, 100,...are the `weights` of each position.

**Principle**: A number is just a sum of `each digit` multiplied by it's `positional weight`.

Humans came up with this principle to `count` and it can be applied to any number system, not just the Decimal one.

## Binary:
Here `0`s and `1`s are the only digits.

000, 001, 010, 011, 100,....

Positive no's can easily be represented using the principle. Here, the weights are `powers of 2` instead of 10.
e.g.: `1001 = 1*(2^3) + 0*(2^2) + 0*(2^1) + 1*(2^0) = 9`

>But, How to represent the negative numbers?
## The Two 0's Problem:
### The Sign and Magnitude Method:
Use the first bit for `sign` (0 = +ve and 1 = -ve) and the other bits for `value`.

Problem-1: `0000 = +0` and `1000 = -0`, representing the same magnitude with 2 different patterns.
Problem-2: The hardware must be programmed such that `0000` and `1000` represents the same value, reducing efficiency.

# Solution: The Two's Complement Method:
`0` is for `+ve` and `1` is for `-ve`, but we define the weight of the placeholder of the first bit (from left). 

Let's consider a circular tape that is 16 inches long, representing the 16 possible patterns of a 4-bit number *(16 because: from `0000` to `1111`. with 4 bits, there are `2^4 = 16` unique patterns)


                      0
                 .---------.
             15.'           '.1
            .                 .
        14.'                   '.2
         .                       .
       13                        3
        |                         |
      12|                         |4
        |                         |
       11                        5
         '.                     .'
        10 '.                 .' 6
            '.             .'
             9 '-.     .-' 7
                 '-----'
                    8

> Starting from `0`, moving 1 unit anti clockwise `(-1)` will land us on the last mark, `15(=1111)`.
> `0 - 1 = -1`
> For the math to be consistent, `1111` must be equal to `-1`.
> Say, the weight of the first bit is `W`.
> So, `(1*W) + (1*4) + (1*2) + (1*1) = -1`
> `W + 7 = -1`
> Therefore, `W = -8`(instead of `+15`, making subtraction working correctly).

### To Generalize:
In an `n-bit` Two's Complement `-ve` integer, the `weight of the sign bit = -2^(n-1)`💡🔥⚡

>The weight of the sign bit isn’t just a number we can read off directly as `-2^(n-1)`, but it's the value it contributes in the two’s complement interpretation.

For `+ve`, the `weight` doesn't matter since it'll be multiplied to `0`.

🔥a binary pattern has no inherent meaning. We, the programmers, give it meaning by choosing a system (unsigned/signed, 4-bit, n-bit,...).🔥

Calculation:
The largest `+ve` integer representation using 16 bits:
Sign bit = `0` and rest are `1`s. `= 0 111 1111 1111 1111` `= 2^0 + 2^1 + ... + 2^14` `= 32767`.

(For 16 bits, the sign bit is at position 15 (indexing from 0), so the largest positive is `(n-1)` bits of `1`s:
= `2^(n-1) - 1`
For n=16: = 2^15 - 1 = 32767)

> Trick: `2^0 + 2^1 + ... + 2^(n-1) = (2^n) - 1`.