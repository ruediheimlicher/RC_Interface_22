//
//  rDiagrammGitterlinien.h
//  WebInterface
//
//  Created by Sysadmin on 27.Februar.09.
//  Copyright 2009 Ruedi Heimlicher. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "rDataDiagramm.h"
#import "rLegende.h"

@interface rDiagrammGitterlinien : rDataDiagramm
{
	 	int					Intervall;
		int					Teile;
		int					LinieOK;
		rLegende*			Legende;
//		NSCalendarDate*	DatenserieStartZeit;
		int					StartStunde;
		int					StartMinute;

}
- (void)setOffsetY:(int)y;
- (void)setEinheitenDicY:(NSDictionary*)derEinheitenDic;
- (void)setWertMitX:(float)x mitY:(float)y forKanal:(int)derKanal;
- (void)setWerteArray:(NSArray*)derWerteArray mitKanalArray:(NSArray*)derKanalArray;

- (void)setZeitKompression:(float)dieKompression mitAbszissenArray:(NSArray*)derArray;
- (void)senkrechteLinienZeichnen;
@end
