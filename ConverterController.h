//
//  ConverterController.h
//  cocoa-example-app
//
//  Created by Daniel Schauenberg on 7/12/10.
//

#import <Cocoa/Cocoa.h>
#import "Converter.h"


@interface ConverterController : NSObject {
  IBOutlet NSTextField *amountField;
  IBOutlet NSTextField *dollarField;
  IBOutlet NSTextField *rateField;
  Converter *converter;
}

- (IBAction)convert:(id)sender;

@end
