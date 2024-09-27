// XTPResizeGroupBox.h : header file
//
// This file is a part of the XTREME CONTROLS MFC class library.
// (c)1998-2011 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

//{{AFX_CODEJOCK_PRIVATE
#if !defined(__XTPRESIZEGROUPBOX_H__)
#define __XTPRESIZEGROUPBOX_H__
//}}AFX_CODEJOCK_PRIVATE

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//---------------------------------------------------------------------------
// Summary:
//     CXTPResizeGroupBox is a CButton derived class that can be used to display
//     a flicker free group box while resizing.  This class is intended to only
//     be used as a group box and only used on a CXTPResize window.  You can
//     subclass or create this object the way you would any CButton.
//
// Note:
//     Do not use the transparent flag with this control, and make sure you
//     call SetFlag(xtpResizeNoTransparentGroup); to disable the resize manager from
//     setting this for you.
//---------------------------------------------------------------------------
class _XTP_EXT_CLASS CXTPResizeGroupBox : public CButton
{
	DECLARE_DYNAMIC(CXTPResizeGroupBox)

public:

	//-----------------------------------------------------------------------
	// Summary:
	//     Constructs a CXTPResizeGroupBox object
	//-----------------------------------------------------------------------
	CXTPResizeGroupBox();

	//-----------------------------------------------------------------------
	// Summary:
	//     Destroys a CXTPResizeGroupBox object, handles cleanup and
	//     deallocation
	//-----------------------------------------------------------------------
	virtual ~CXTPResizeGroupBox();

protected:
	//-----------------------------------------------------------------------
	// Summary:
	//     Called during paint operations to exclude the control windows
	//     that are grouped by this control.
	// Parameters:
	//     pDC      - Pointer to device context.
	//     rcClient - Client area of group box.
	//-----------------------------------------------------------------------
	virtual void Exclude(CDC* pDC, CRect& rcClient);


protected:
//{{AFX_CODEJOCK_PRIVATE
	DECLARE_MESSAGE_MAP()

	//{{AFX_VIRTUAL(CXTPResizeGroupBox)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CXTPResizeGroupBox)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();
	//}}AFX_MSG
//}}AFX_CODEJOCK_PRIVATE
};

#endif // !defined(__XTPRESIZEGROUPBOX_H__)
