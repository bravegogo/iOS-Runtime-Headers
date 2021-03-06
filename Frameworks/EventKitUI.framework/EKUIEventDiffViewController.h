/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventDiffViewController : EKEventViewController <EKEditItemViewControllerProtocol, EKEventTitleDetailItemDelegate> {
    <EKEditItemViewControllerDelegate> * _editDelegate;
    NSMutableArray * _items;
    EKEvent * _originalEvent;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (retain) EKEvent *originalEvent;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL useCustomBackButton;

- (void).cxx_destruct;
- (id)_items;
- (id)_statusButtons;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (void)apply;
- (void)editButtonPressed;
- (id)editDelegate;
- (BOOL)editItemShouldBeAskedForInjectableViewController;
- (id)initWithOriginalEvent:(id)arg1 newEvent:(id)arg2;
- (id)originalEvent;
- (BOOL)presentModally;
- (void)setEditDelegate:(id)arg1;
- (void)setOriginalEvent:(id)arg1;
- (BOOL)shouldShowEditButtonInline;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)title;
- (BOOL)useCustomBackButton;

@end
