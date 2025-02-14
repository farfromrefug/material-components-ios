// Copyright 2017-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "MDCTextInputController.h"

// API_DEPRECATED_BEGIN(
//     "🕘 Schedule time to migrate. "
//     "Use branded UITextField or UITextView instead: go/material-ios-text-fields/gm2-migration. "
//     "This is go/material-ios-migrations#not-scriptable 🕘",
//     ios(12, 12))

/**
 Material Design compliant text field for full width applications like email forms.
 https://material.io/go/design-text-fields#text-fields-field-variations

 NOTE: This class does not inherit from MDCTextInputControllerBase. It does not have a floating
 placeholder.

 The placeholder is laid out inline and the character count is also inline to the trailing side.

 Defaults:

 Active Color - Blue A700

 Border Fill Color - Clear
 Border Stroke Color - Clear

 Disabled Color = [UIColor lightGrayColor]

 Error Color - Red A400

 Floating Placeholder Color Active - Blue A700
 Floating Placeholder Color Normal - Black, 54% opacity

 Inline Placeholder Color - Black, 54% opacity

 Leading Underline Label Text Color - Black, 54% opacity

 Normal Color - Black, 54% opacity

 Rounded Corners - None

 Trailing Underline Label Text Color - Black, 54% opacity

 Underline Height Active - 0p
 Underline Height Normal - 0p

 Underline View Mode - While editing
 */
@interface MDCTextInputControllerFullWidth : NSObject <MDCTextInputController>

/**
 Color for background for the various views making up a text field.

 Default is backgroundColorDefault.
 */
@property(nonatomic, null_resettable, strong) UIColor *backgroundColor;

/**
 Default value for backgroundColor.
 */
@property(class, nonatomic, null_resettable, strong) UIColor *backgroundColorDefault;

@end

//API_DEPRECATED_END
