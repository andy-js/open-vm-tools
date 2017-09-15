/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CPmeIdCollectionDoc_h_
#define CPmeIdCollectionDoc_h_

namespace Caf {

/// A simple container for objects of type PmeIdCollection
class CPmeIdCollectionDoc {
public:
	CPmeIdCollectionDoc() :
		_isInitialized(false) {}
	virtual ~CPmeIdCollectionDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::deque<std::string> pmeIdCollection) {
		if (! _isInitialized) {
			_pmeIdCollection = pmeIdCollection;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the PmeId
	std::deque<std::string> getPmeIdCollection() const {
		return _pmeIdCollection;
	}

private:
	bool _isInitialized;

	std::deque<std::string> _pmeIdCollection;

private:
	CAF_CM_DECLARE_NOCOPY(CPmeIdCollectionDoc);
};

CAF_DECLARE_SMART_POINTER(CPmeIdCollectionDoc);

}

#endif