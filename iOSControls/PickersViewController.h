//
//  PickersViewController.h
//  iOSAutomationTestApp
//
//  Created by Chanikya Mandapathi on 8/9/16.
//  Copyright © 2016 CanNMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PickersViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UIPickerView *pickerView;
@property (weak, nonatomic) IBOutlet UIPickerView *multiCompPicker;
- (IBAction)datePickerValueChanged:(UIDatePicker *)sender;

@end
