# I/O Buffering:

> The Operating System doesn't deliver data (for processing or whatever..) one bit(0/1) at a time for efficiency. like...delivering one bit and coming back, picking up second bit and back.....is very slow.

It collects in a temporary garage called `buffer`.

This is important for efficiency's sake and also, if the data is processed bit-by-bit directly before sending it to buffer, say we made a mistake while typing in the terminal, then we can't  use `backspace` to edit the command.


>`\n` is the universal signal for `"I'm done with this line and you (the program) can process it now."`
After seeing the `\n`, the OS sends the completed line to the `input stream` of the program.

Only then, `getchar()` will read the input.