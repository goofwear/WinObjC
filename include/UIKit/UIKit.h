//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#pragma once

#include <StubIncludes.h>

#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIView.h>
#import <UIKit/NSAttributedString+UIKitAdditions.h>
#import <UIKit/NSBundle+UIKitAdditions.h>
#import <UIKit/NSDataAsset.h>
#import <UIKit/NSFileProviderExtension.h>
#import <UIKit/NSIndexPath+UITableView.h>
#import <UIKit/NSLayoutAnchor.h>
#import <UIKit/NSLayoutConstraint.h>
#import <UIKit/NSLayoutDimension.h>
#import <UIKit/NSLayoutManager.h>
#import <UIKit/NSLayoutManagerDelegate.h>
#import <UIKit/NSLayoutXAxisAnchor.h>
#import <UIKit/NSLayoutYAxisAnchor.h>
#import <UIKit/NSMutableAttributedString+UIKitAdditions.h>
#import <UIKit/NSMutableParagraphStyle.h>
#import <UIKit/NSObject+UIKitAdditions.h>
#import <UIKit/NSParagraphStyle.h>
#import <UIKit/NSShadow.h>
#import <UIKit/NSStringDrawing.h>
#import <UIKit/NSStringDrawingContext.h>
#import <UIKit/NSTextAttachment.h>
#import <UIKit/NSTextAttachmentContainer.h>
#import <UIKit/NSTextContainer.h>
#import <UIKit/NSTextLayoutOrientationProvider.h>
#import <UIKit/NSTextStorage.h>
#import <UIKit/NSTextStorageDelegate.h>
#import <UIKit/NSTextTab.h>
#import <UIKit/UIAcceleration.h>
#import <UIKit/UIAccelerometer.h>
#import <UIKit/UIAccelerometerDelegate.h>
#import <UIKit/UIAccessibility.h>
#import <UIKit/UIAccessibilityConstants.h>
#import <UIKit/UIAccessibilityCustomAction.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityIdentification.h>
#import <UIKit/UIAccessibilityReadingContent.h>
#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIActivity.h>
#import <UIKit/UIActivityIndicatorView.h>
#import <UIKit/UIActivityItemProvider.h>
#import <UIKit/UIActivityItemSource.h>
#import <UIKit/UIActivityViewController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIAlert.h>
#import <UIKit/UIAlertAction.h>
#import <UIKit/UIAlertController.h>
#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UIAppearanceContainer.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIApplicationShortcutIcon.h>
#import <UIKit/UIApplicationShortcutItem.h>
#import <UIKit/UIAttachmentBehavior.h>
#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIBarButtonItemGroup.h>
#import <UIKit/UIBarItem.h>
#import <UIKit/UIBarPositioning.h>
#import <UIKit/UIBarPositioningDelegate.h>
#import <UIKit/UIBezierPath.h>
#import <UIKit/UIBlurEffect.h>
#import <UIKit/UIButton.h>
#import <UIKit/UICollectionReusableView.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <UIKit/UICollectionViewFlowLayoutInvalidationContext.h>
#import <UIKit/UICollectionViewFocusUpdateContext.h>
#import <UIKit/UICollectionViewLayout.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>
#import <UIKit/UICollectionViewTransitionLayout.h>
#import <UIKit/UICollectionViewUpdateItem.h>
#import <UIKit/UICollisionBehavior.h>
#import <UIKit/UICollisionBehaviorDelegate.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIContentContainer.h>
#import <UIKit/UIControl.h>
#import <UIKit/UICoordinateSpace.h>
#import <UIKit/UIDataDetectors.h>
#import <UIKit/UIDataSourceModelAssociation.h>
#import <UIKit/UIDatePicker.h>
#import <UIKit/UIDevice.h>
#import <UIKit/UIDictationPhrase.h>
#import <UIKit/UIDocument.h>
#import <UIKit/UIDocumentInteractionController.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UIDocumentMenuDelegate.h>
#import <UIKit/UIDocumentMenuViewController.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIDocumentPickerExtensionViewController.h>
#import <UIKit/UIDocumentPickerViewController.h>
#import <UIKit/UIDynamicAnimator.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <UIKit/UIDynamicBehavior.h>
#import <UIKit/UIDynamicItem.h>
#import <UIKit/UIDynamicItemBehavior.h>
#import <UIKit/UIDynamicItemGroup.h>
#import <UIKit/UIEvent.h>
#import <UIKit/UIFieldBehavior.h>
#import <UIKit/UIFocusAnimationCoordinator.h>
#import <UIKit/UIFocusEnvironment.h>
#import <UIKit/UIFocusGuide.h>
#import <UIKit/UIFocusUpdateContext.h>
#import <UIKit/UIFont.h>
#import <UIKit/UIFontDescriptor.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIGraphics.h>
#import <UIKit/UIGravityBehavior.h>
#import <UIKit/UIGuidedAccessRestrictionDelegate.h>
#import <UIKit/UIImage.h>
#import <UIKit/UIImageAsset.h>
#import <UIKit/UIImagePickerController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIInputView.h>
#import <UIKit/UIInputViewAudioFeedback.h>
#import <UIKit/UIInputViewController.h>
#import <UIKit/UIInterface.h>
#import <UIKit/UIInterpolatingMotionEffect.h>
#import <UIKit/UIKey.h>
#import <UIKit/UIKeyCommand.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UIKit.h>
#import <UIKit/UIKitExport.h>
#import <UIKit/UIKitTypes.h>
#import <UIKit/UILabel.h>
#import <UIKit/UILayoutGuide.h>
#import <UIKit/UILayoutSupport.h>
#import <UIKit/UILexicon.h>
#import <UIKit/UILexiconEntry.h>
#import <UIKit/UILocalizedIndexedCollation.h>
#import <UIKit/UILocalNotification.h>
#import <UIKit/UILongPressGestureRecognizer.h>
#import <UIKit/UIManagedDocument.h>
#import <UIKit/UIMarkupTextPrintFormatter.h>
#import <UIKit/UIMenuController.h>
#import <UIKit/UIMenuItem.h>
#import <UIKit/UIMotionEffect.h>
#import <UIKit/UIMotionEffectGroup.h>
#import <UIKit/UIMutableApplicationShortcutItem.h>
#import <UIKit/UIMutableUserNotificationAction.h>
#import <UIKit/UIMutableUserNotificationCategory.h>
#import <UIKit/UINavigationBar.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UINavigationItem.h>
#import <UIKit/UINib.h>
#import <UIKit/UIObjectRestoration.h>
#import <UIKit/UIPageControl.h>
#import <UIKit/UIPageViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <UIKit/UIPasteboard.h>
#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewAccessibilityDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPinchGestureRecognizer.h>
#import <UIKit/UIPopoverBackgroundView.h>
#import <UIKit/UIPopoverBackgroundViewMethods.h>
#import <UIKit/UIPopoverController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverPresentationController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/UIPress.h>
#import <UIKit/UIPressesEvent.h>
#import <UIKit/UIPreviewAction.h>
#import <UIKit/UIPreviewActionGroup.h>
#import <UIKit/UIPreviewActionItem.h>
#import <UIKit/UIPrinter.h>
#import <UIKit/UIPrinterPickerController.h>
#import <UIKit/UIPrinterPickerControllerDelegate.h>
#import <UIKit/UIPrintFormatter.h>
#import <UIKit/UIPrintInfo.h>
#import <UIKit/UIPrintInteractionController.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>
#import <UIKit/UIPrintPageRenderer.h>
#import <UIKit/UIPrintPaper.h>
#import <UIKit/UIProgressView.h>
#import <UIKit/UIPushBehavior.h>
#import <UIKit/UIReferenceLibraryViewController.h>
#import <UIKit/UIRefreshControl.h>
#import <UIKit/UIRegion.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIResponderStandardEditActions.h>
#import <UIKit/UIRotationGestureRecognizer.h>
#import <UIKit/UIRuntimeEventConnection.h>
#import <UIKit/UIScreen.h>
#import <UIKit/UIScreenEdgePanGestureRecognizer.h>
#import <UIKit/UIScreenMode.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewAccessibilityDelegate.h>
#import <UIKit/UIScrollWheelGestureRecognizer.h>
#import <UIKit/UISearchBar.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchContainerViewController.h>
#import <UIKit/UISearchController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchDisplayController.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISegmentedControl.h>
#import <UIKit/UISimpleTextPrintFormatter.h>
#import <UIKit/UISlider.h>
#import <UIKit/UISnapBehavior.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <UIKit/UIStackView.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIStepper.h>
#import <UIKit/UIStoryboard.h>
#import <UIKit/UIStoryboardPopoverSegue.h>
#import <UIKit/UIStoryboardPushSegueTemplate.h>
#import <UIKit/UIStoryboardSegue.h>
#import <UIKit/UIStoryboardSegueTemplate.h>
#import <UIKit/UISwipeGestureRecognizer.h>
#import <UIKit/UISwitch.h>
#import <UIKit/UITabBar.h>
#import <UIKit/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UITabBarDelegate.h>
#import <UIKit/UITabBarItem.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewFocusUpdateContext.h>
#import <UIKit/UITableViewHeaderFooterView.h>
#import <UIKit/UITableViewRowAction.h>
#import <UIKit/UITapGestureRecognizer.h>
#import <UIKit/UITextChecker.h>
#import <UIKit/UITextDocumentProxy.h>
#import <UIKit/UITextField.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextInputAssistantItem.h>
#import <UIKit/UITextInputMode.h>
#import <UIKit/UITextInputStringTokenizer.h>
#import <UIKit/UITextInputTokenizer.h>
#import <UIKit/UITextInputTraits.h>
#import <UIKit/UITextPosition.h>
#import <UIKit/UITextRange.h>
#import <UIKit/UITextSelectionRect.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIToolbar.h>
#import <UIKit/UIToolbarDelegate.h>
#import <UIKit/UITouch.h>
#import <UIKit/UITraitCollection.h>
#import <UIKit/UITraitEnvironment.h>
#import <UIKit/UIUserNotificationAction.h>
#import <UIKit/UIUserNotificationCategory.h>
#import <UIKit/UIUserNotificationSettings.h>
#import <UIKit/UIVibrancyEffect.h>
#import <UIKit/UIVideoEditorController.h>
#import <UIKit/UIVideoEditorControllerDelegate.h>
#import <UIKit/UIViewAdapter.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerContextTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <UIKit/UIViewControllerPreviewing.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>
#import <UIKit/UIViewControllerTransitionCoordinatorContext.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewPrintFormatter.h>
#import <UIKit/UIVisualEffect.h>
#import <UIKit/UIVisualEffectView.h>
#import <UIKit/UIWebView.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWindow.h>
