//
//  Converter.h
//  cocoa-example-app
//
//  Created by Daniel Schauenberg
//

#import <Cocoa/Cocoa.h>


@interface Converter : NSObject {
    float sourceCurrencyAmount, rate;
}

@property (readwrite) float sourceCurrencyAmount, rate;

- (float) convertCurrency;

@end
