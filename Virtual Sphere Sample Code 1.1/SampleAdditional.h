/*еееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееее/* SampleAdditional.c/*/* This file contains routines to replace the standard ones in Sample.c/*/* Author: Michael Chen, Human Interface Group / ATG/* Copyright й 1991-1993 Apple Computer, Inc.  All rights reserved./*/* Part of Virtual Sphere Sample Code Release v1.1/*еееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееееее*/#ifndef	__SAMPLEADDITIONAL__#define __SAMPLEADDITIONAL__#ifndef __GLOBALS__#include "Globals.h"#endif#ifndef	__EVENTS__#include <Events.h>#endif#ifndef	__WINDOWS__#include <Windows.h>#endifvoid	Initialize3D (WindowPtr window);void	CleanUp3D (void);void	CheckSystemConfiguration (void);void	AdjustAdditionalMenus (void);void	DoAdditionalMenuCommand (long menuResult);void	DoContentClick (WindowPtr window, EventRecord *event);void 	DrawWindow (WindowPtr window);void	UpdateWindow (WindowPtr window);#endif __SAMPLEADDITIONAL__