/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STWeeklyReportViewController : UITableViewController {
    STUsageReport * _report;
    NSArray * _tableViewCells;
}

@property (nonatomic, readonly) STUsageReport *report;
@property (nonatomic, retain) NSArray *tableViewCells;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithUsageReport:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)report;
- (void)setTableViewCells:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableViewCells;
- (void)viewDidLoad;

@end