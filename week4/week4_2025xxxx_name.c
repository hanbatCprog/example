#include <stdio.h>

#define VAT_RATE 0.1 // Value Added Tax Rate (constant)

int main(void)
{
    // Variable declaration
    int original_price;       // Original price of the product
    int discount_percent;     // Discount rate (%)
    
    int price_after_discount; // Price after applying the discount
    float vat_amount;         // The amount of VAT to be added
    float final_price;        // The final price including VAT

    // Input prompt and value storage
    printf("Enter the original price: ");
    // #1. Use scanf to read an integer and store it in the original_price variable.

    printf("Enter the discount rate (%%): "); 
    scanf("%d", &discount_percent);
    
    // --- Calculation Process ---
    
    // #2. Calculate the price after discount.
    price_after_discount = 
    
    
    // Calculate the VAT on the discounted price
    vat_amount = price_after_discount * VAT_RATE;
    
    // #3. Calculate the final price by adding the vat_amount to the price_after_discount.
    final_price = 
    
    
    // --- Output Results ---
    printf("---------------------------------\n");
    printf("Price after discount: %d\n", price_after_discount);
    printf("VAT (%.0f%%): %.2f\n", VAT_RATE * 100, vat_amount);
    printf("Total final price: %.2f\n", final_price);

    return 0;

}
