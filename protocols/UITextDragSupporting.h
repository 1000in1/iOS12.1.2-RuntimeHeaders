/* Generated by EzioChiu.
 */

@protocol UITextDragSupporting <UITextDraggable>

@required

- (bool)allowsDraggingAttachments;
- (bool)allowsEditingTextAttributes;
- (void)draggingFinished:(id <UITextDragFinishState>)arg1;
- (void)draggingStarted;

@optional

- (bool)_shouldObscureInput;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRangeWithLayout:(bool)arg1;
- (void)didGenerateCancelPreview:(id)arg1;
- (void)performCancelAnimations;
- (id)willGenerateCancelPreview;

@end
