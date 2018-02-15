//
//  DatePickerController.h
//  iOSAutomationTestApp
//
//  Created by Omar Hernandez on 8/15/17.
//  Copyright © 2017 CanNMobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DatePickerController : UIViewController
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker1;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker2;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker3;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker4;
- (IBAction)datePickerValueChanged1:(UIDatePicker *)sender;
- (IBAction)datePickerValueChanged2:(UIDatePicker *)sender;
- (IBAction)datePickerValueChanged3:(UIDatePicker *)sender;
- (IBAction)datePickerValueChanged4:(UIDatePicker *)sender;
@end
