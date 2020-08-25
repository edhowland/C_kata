# C_kata
Tutorials and katas for the C programming language

## Kata number

Kata-5 : Side Journey

## Abstract

Find all katas here by git tag.

E.g. The first kata is kata-1 tag.

## Previous Katas

- [kata-1](kata-1/kata-1.md)
- [kata-2](kata-2/kata-2.md)
- [kata-3](kata-3/kata-3.md)
- [kata-4](kata-4/kata-4.md)
## Kata-5 Miscellany

### Makefiles

## No Magic numbers

Upto this point, we have been declaring our return code from our main(void) function
as a pure 0. We should not use magic numbers in our programs. Do you remember what
'return 0;' means?

Check out no_magic.c and exit_failure.c for more descriptive exit status defines.

Note: you will need to also include stdlib.h:

```C
#include <stdio.h>
#include <stdlib.h> // This one also for EXIT_SUCCESS, EXIT_FAILURE
```

