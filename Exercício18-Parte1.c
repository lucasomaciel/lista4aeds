/*Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para
isto, mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda
delas. Faça um algoritmo que determine e escreva quantas mercadorias proporcionam lucro < 10%, 10%
≤ lucro ≤ 20% e lucro > 20%. Determine também e escreva o valor total de compra e de venda de todas as
mercadorias, assim como o lucro total.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  double quantProducts;
  double purchasePrice;
  double salePrice;
  double profit;
  double profitMargin;
  double profitMargin10 = 0.0;
  double profitMargin1020 = 0.0;
  double profitMargin20 = 0.0;
  double totalPurchasePrice = 0.0;
  double totalSalePrice = 0.0;
  double totalProfit = 0.0;

  printf("How many products were sold?\n");
  scanf("%lf", &quantProducts);

  printf("Type in the purchase price and the sale price consecutively for each product.\n");
  for (int i = 0; i < quantProducts; i++) {

    scanf("%lf %lf", &purchasePrice, &salePrice);

    totalPurchasePrice += purchasePrice;
    totalSalePrice += salePrice;

    profit = salePrice - purchasePrice;
    totalProfit += profit;
    profitMargin = (salePrice - purchasePrice)/salePrice;

    if (profitMargin < 0.10) {
      profitMargin10++;
    }
    else if ((profitMargin > 0.10) && (profitMargin < 0.20)) {
      profitMargin1020++;
    }
    else {
      profitMargin20++;
    }

  }

  printf("There was/were %.0lf products that had a profit margin smaller than 10 per cent.\n", profitMargin10);
  printf("There was/were %.0lf products that had a profit margin bigger than 10 per cent and smaller than 20 per cent.\n", profitMargin1020);
  printf("There was/were %.0lf products that had a profit margin bigger than 20 per cent.\n", profitMargin20);
  printf("The total purchase price was equal to %.2lf.\n", totalPurchasePrice);
  printf("The total sale price was equal to %.2lf.\n", totalSalePrice);
  printf("The total profit was equal to %.2lf.\n", totalProfit);


  return 0;
}