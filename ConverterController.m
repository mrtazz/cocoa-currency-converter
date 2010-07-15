//
//  ConverterController.m
//  cocoa-example-app
//
//  Created by Daniel Schauenberg on 7/12/10.
//

#import "ConverterController.h"


@implementation ConverterController
- (IBAction)convert:(id)sender
{
  float amount;
  converter = [[Converter alloc]init];

  [converter setSourceCurrencyAmount:[dollarField floatValue]];

  [converter setRate:[rateField floatValue]];
  amount = [converter convertCurrency];

  [amountField setFloatValue:amount];

  [rateField selectText:self];
}
@end
