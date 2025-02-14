// Copyright 2020-present the Material Components for iOS authors. All Rights Reserved.
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

// API_DEPRECATED_BEGIN(
//     "🕘 Schedule time to migrate. "
//     "Use branded UITextField or UITextView instead: go/material-ios-text-fields/gm2-migration. "
//     "This is go/material-ios-migrations#not-scriptable 🕘",
//     ios(12, 12))

@class MDCBaseTextArea;

/**
This delegate protocol for @c MDCBaseTextArea and its subclasses provides updates about the text
area unrelated to the text area's contained @c textView.
 */
@protocol MDCBaseTextAreaDelegate <NSObject>

@optional

- (void)baseTextArea:(nonnull MDCBaseTextArea *)baseTextArea shouldChangeSize:(CGSize)newSize;

@end

//API_DEPRECATED_END
