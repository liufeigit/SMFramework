/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRReflectionControl, BRAlignmentAdjustingTextControl, BRDividerControl, BRHeaderControl, BRImageControl;

@interface BRAlertControl : BRControl {
@private
	SEL _eventSelector;	// 44 = 0x2c
	BRHeaderControl *_header;	// 48 = 0x30
	BRDividerControl *_divider;	// 52 = 0x34
	int _type;	// 56 = 0x38
	BRTextControl *_primary;	// 60 = 0x3c
	BRAlignmentAdjustingTextControl *_secondary;	// 64 = 0x40
	BRImageControl *_image;	// 68 = 0x44
	BRReflectionControl *_reflection;	// 72 = 0x48
}
@property(retain) BRImageControl *image;	// G=0x34cf3909; S=0x34cf38c1; converted property
@property(retain) id primaryText;	// G=0x34cf37e5; S=0x34cf3771; converted property
@property(retain) id secondaryText;	// G=0x34cf3859; S=0x34cf3815; converted property
@property(retain) id title;	// G=0x34cf3751; S=0x34cf3719; converted property
+ (id)alertForError:(id)error;	// 0x34cf33c5
+ (id)alertOfType:(int)type;	// 0x34cf3455
+ (id)alertOfType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x34cf3405
- (id)init;	// 0x34cf3495
- (id)initWithType:(int)type;	// 0x34cf34ad
- (id)initWithType:(int)type titled:(id)titled primaryText:(id)text secondaryText:(id)text4;	// 0x34cf34cd
- (id)_controlsForType:(int)type;	// 0x34cf3f8d
- (void)_layoutSubcontrolsForAlert;	// 0x34cf3c85
- (void)_layoutSubcontrolsForInfo;	// 0x34cf395d
- (id)_primaryTextAttibutesForType:(int)type;	// 0x34cf4371
- (id)accessibilityLabel;	// 0x34cf43c5
- (void)controlWasActivated;	// 0x34cf360d
- (void)dealloc;	// 0x34cf356d
// converted property getter: - (id)image;	// 0x34cf3909
- (BOOL)isAccessibilityElement;	// 0x34cf43c1
- (void)layoutSubcontrols;	// 0x34cf3929
// converted property getter: - (id)primaryText;	// 0x34cf37e5
// converted property getter: - (id)secondaryText;	// 0x34cf3859
// converted property setter: - (void)setImage:(id)image;	// 0x34cf38c1
// converted property setter: - (void)setPrimaryText:(id)text;	// 0x34cf3771
- (void)setPrimaryText:(id)text withAttributes:(id)attributes;	// 0x34cf37ad
// converted property setter: - (void)setSecondaryText:(id)text;	// 0x34cf3815
- (void)setSecondaryText:(id)text withAttributes:(id)attributes;	// 0x34cf3889
// converted property setter: - (void)setTitle:(id)title;	// 0x34cf3719
- (void)setType:(int)type;	// 0x34cf363d
// converted property getter: - (id)title;	// 0x34cf3751
@end

