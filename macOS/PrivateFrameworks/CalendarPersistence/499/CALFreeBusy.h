//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALEntity.h>

@interface CALFreeBusy : CALEntity
{
}

- (void)setMaskUID:(id)arg1;
- (id)maskUID;
- (id)expandOnTimeRange:(id)arg1;
- (void)removeAllFreeBusyTimes;
- (void)setFreeBusyTimes:(id)arg1;
- (void)removeFreeBusyTime:(id)arg1;
- (void)addFreeBusyTime:(id)arg1;
- (id)freeBusyTimes;
- (void)removeAllRequestStatus;
- (void)setRequestStatus:(id)arg1;
- (void)removeRequestStatus:(id)arg1;
- (void)addRequestStatus:(id)arg1;
- (id)requestStatus;
- (void)removeAllComments;
- (void)setComments:(id)arg1;
- (void)removeComment:(id)arg1;
- (void)addComment:(id)arg1;
- (id)comments;
- (void)removeAllAttendees;
- (void)setAttendees:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (id)attendees;
- (BOOL)hasAttendee:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;
- (void)setUID:(id)arg1;
- (id)uid;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (void)setStampDate:(id)arg1;
- (id)stampDate;
- (void)setDuration:(id)arg1;
- (id)duration;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)setContact:(id)arg1;
- (id)contact;
- (id)occurrencesOnTimeRange:(id)arg1;

@end

