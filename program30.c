#include <stdio.h>

//ΕΞΤΡΑ ΤΙΠΣ ΑΠΟ ΚΥΡΙΟ ΑΥΓΕΡΙΝΟ - EXTRA TIPS FROM MRS AVGERINOS

int main() {
  int new_passengers, passengers = 0;
  int items_read;

  while (1) {
    
    printf("How many passengers are going on the bus: ");
    items_read = scanf("%d", &new_passengers);
    if (items_read == 0 || items_read == EOF) {
      break;
    }

    printf("Items read: %d\n", items_read);
    passengers += new_passengers;
    printf("Now we have %d total passengers\n", passengers);
  }
  return 0;
}