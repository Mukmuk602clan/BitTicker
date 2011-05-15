/*
 BitTicker is Copyright 2011 Stephen Oliver
 http://github.com/mrsteveman1
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA 
 */

#import <Cocoa/Cocoa.h>
#import "Ticker.h"
#import "StatusItemView.h"

@interface BitTickerAppDelegate : NSObject <NSApplicationDelegate> {
    NSString *tickerValue;
	Ticker *_ticker;
	NSThread *updateThread;
	NSThread *tickerThread;
	int debugging;
	NSMutableArray *stats;
    NSMutableArray *highArray;
    NSMutableArray *lowArray;
	StatusItemView *statusItemView;
	NSStatusItem *_statusItem;

	//fields for each stat
	NSTextField *highValue;
	NSTextField *lowValue;
	NSTextField *volValue;
	NSTextField *buyValue;
	NSTextField *sellValue;
	NSTextField *lastValue;
    
	NSString *high;
    NSString *low;
    NSString *vol;
    NSString *buy;
    NSString *sell;
    NSString *last;

	NSView *statsView;
	NSMenuItem *statsItem;
	
	// below the line
	NSMenuItem *quitItem;
    NSMenuItem *aboutItem;
	NSMenuItem *preferenceItem;
	
	NSMenu *trayMenu;
}

- (void) startTickerThread;
- (void) startTicker;
- (void) updateTickerData;
- (void) updateMenu;
- (void) quitProgram:(id)sender;

@property (retain, nonatomic) NSString *tickerValue;
@property (retain) Ticker *ticker;
@property (retain) NSMutableArray *stats;
@property (nonatomic) NSInteger cancelThread;

@end