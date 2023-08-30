# FFORMULA 
This function typically quantifies the extent to which the elements within a set deviate from the mean.

$$f(x) = \sum_{k\in x}^{n(x)}\sqrt{\left| k-\bar{x} \right|}$$

$x$ is a cluster and $n(x)$ gives element count of $x$.

For example;<br>
$x=\textbraceleft 1,3,5,8,9,0 \textbraceright$<br>
$f(x)=9.95$

## Calculating Root
A not-so-efficient but working root calculation formula.<br>
$$\lim_{a \to x}a^{2}< x$$

### Example Code
```c
#include <stdio.h>
#include "fformula.h"

int main()
{
    float x[] = {1,3,5,8,9,0};
    printf("%0.2f", fformula(x, *(&x + 1) - x));

    return 0;
}
```
