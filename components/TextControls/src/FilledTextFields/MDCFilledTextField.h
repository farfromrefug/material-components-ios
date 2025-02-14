// Copyright 2019-present the Material Components for iOS authors. All Rights Reserved.
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

#import <UIKit/UIKit.h>

#import "MaterialTextControls+BaseTextFields.h"

// API_DEPRECATED_BEGIN(
//     "🕘 Schedule time to migrate. "
//     "Use branded UITextField or UITextView instead: go/material-ios-text-fields/gm2-migration. "
//     "This is go/material-ios-migrations#not-scriptable 🕘",
//     ios(12, 12))

/**
 An implementation of a Material filled text field.
 */
__attribute__((objc_subclassing_restricted))
@interface MDCFilledTextField : MDCBaseTextField

/**
 MDCFilledTextField does not support UITextBorderStyle borders.
 */
@property(nonatomic, assign) UITextBorderStyle borderStyle NS_UNAVAILABLE;

/**
 Sets the filled background color for a given state.
 @param filledBackgroundColor The UIColor for the given state.
 @param state The MDCTextControlState.
 */
- (void)setFilledBackgroundColor:(nonnull UIColor *)filledBackgroundColor
                        forState:(MDCTextControlState)state;
/**
 Returns the filled background color for a given state.
 @param state The MDCTextControlState.

 The default value is a light shade of gray.
 */
- (nonnull UIColor *)filledBackgroundColorForState:(MDCTextControlState)state;

/**
 Sets the underline color for a given state.
 @param underlineColor The UIColor for the given state.
 @param state The MDCTextControlState.
 */
- (void)setUnderlineColor:(nonnull UIColor *)underlineColor forState:(MDCTextControlState)state;

/**
 Returns the underline color for a given state.
 @param state The MDCTextControlState.

 The default values are sensible shades of black.
 */
- (nonnull UIColor *)underlineColorForState:(MDCTextControlState)state;

@end

//API_DEPRECATED_END
