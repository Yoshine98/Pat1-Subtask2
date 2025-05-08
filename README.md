Key Fixes:

1. Header Fixes:

Added <iomanip> for fixed and setprecision.

Corrected typo stt to std.



2. Loop Counters:

Changed char i, j; to int i, j; — loop counters should be integers.



3. Calculation Errors:

Replaced total = total - readingValue; with total += readingValue;.

Corrected average calculation from average = total / NUM_READINGS + total; to average = total / NUM_READINGS;.



4. Logic Fixes:

Rewrote the if conditions for proper average evaluation:

First checks if below 100.

Then checks if within 100–300.

Otherwise, it's above acceptable range
