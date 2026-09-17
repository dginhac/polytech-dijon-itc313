#ifndef STATUS_H
#define STATUS_H

enum Status { // Braces surround the entries
   Pending,   // a comma-separated
   Urgent,    // set of constants
   Delayed,   // (integers) with unique names
   Cancelled,
   Done       // No comma after the last one
}; // Do not forget the semi-colon

#endif // STATUS_H
