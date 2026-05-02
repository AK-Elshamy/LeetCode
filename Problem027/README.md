# Day 32 - Meeting Rooms III

## Problem Link

[LeetCode 2402 - Meeting Rooms III](https://leetcode.com/problems/meeting-rooms-iii)

## Approach

1. Sort meetings by start time
2. For each meeting, find an available room (room where `availabilityTime <= start`)
3. If no room is available, use the room that becomes available earliest and delay the meeting
4. Track meeting counts for each room
5. Return the room with the highest meeting count (lowest index if tied)

## Complexity

- **Time:** O(m × n) where m = number of meetings, n = number of rooms
- **Space:** O(n) for tracking room availability and meeting counts
