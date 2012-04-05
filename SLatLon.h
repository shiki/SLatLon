//
//  Latitude/longitude spherical geodesy formulae & scripts (c) Chris Veness 2002-2011 
//   - www.movable-type.co.uk/scripts/latlong.html 
//

//
//  SLatLon.h
//  SLatLon
//  
//  Created by Shiki on 3/28/12.
//

#define SLL_TORAD(degrees) (degrees * M_PI / 180)
#define SLL_TODEG(radians) (radians * 180 / M_PI)

#import <Foundation/Foundation.h>

@interface SLatLon : NSObject

@property (nonatomic) double lat;
@property (nonatomic) double lon;
@property (nonatomic) double rad;

- (id) initWithLat:(double)lat lon:(double)lon;
- (id) initWithLat:(double)lat lon:(double)lon rad:(double)rad;

- (double) distanceTo:(SLatLon *)point;
- (double) bearingTo:(SLatLon *)point;
- (SLatLon *) destinationPoint:(double)brng dist:(double)dist;

@end
