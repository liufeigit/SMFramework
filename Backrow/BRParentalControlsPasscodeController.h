/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class NSString, BRTextControl, NSDictionary, BRHeaderControl, BRPasscodeEntryControl;

@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate> {
@private
	BRController *_guardedController;	// 60 = 0x3c
	BRPasscodeEntryControl *_editor;	// 64 = 0x40
	BRHeaderControl *_header;	// 68 = 0x44
	BRTextControl *_prompt;	// 72 = 0x48
	NSString *_passcodeToConfirm;	// 76 = 0x4c
	int _mode;	// 80 = 0x50
	NSDictionary *_userInfo;	// 84 = 0x54
}
@property(retain) NSDictionary *userInfo;	// G=0x34d62ae1; S=0x34d62aa9; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x34d62521
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x34d625b9
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x34d62e49
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x34d62b51
- (void)_passcodeEnteredForSet:(id)set;	// 0x34d62d09
- (id)accessibilityLabel;	// 0x34d63061
- (void)dealloc;	// 0x34d6278d
- (void)setFrame:(CGRect)frame;	// 0x34d6282d
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x34d62a51
- (void)setIconScaleFactor:(float)factor;	// 0x34d62a89
- (void)setPasscodeToConfirm:(id)confirm;	// 0x34d62a19
// converted property setter: - (void)setUserInfo:(id)info;	// 0x34d62aa9
- (void)textDidChange:(id)text;	// 0x34d62af1
- (void)textDidEndEditing:(id)text;	// 0x34d62af5
// converted property getter: - (id)userInfo;	// 0x34d62ae1
@end

