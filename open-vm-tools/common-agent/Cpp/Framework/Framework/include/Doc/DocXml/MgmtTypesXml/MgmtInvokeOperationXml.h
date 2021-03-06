/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef MgmtInvokeOperationXml_h_
#define MgmtInvokeOperationXml_h_


#include "Doc/MgmtTypesDoc/CMgmtInvokeOperationDoc.h"

#include "Doc/DocXml/MgmtTypesXml/MgmtTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the MgmtInvokeOperation class to/from XML
	namespace MgmtInvokeOperationXml {

		/// Adds the MgmtInvokeOperationDoc into the XML.
		void MGMTTYPESXML_LINKAGE add(
			const SmartPtrCMgmtInvokeOperationDoc mgmtInvokeOperationDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the MgmtInvokeOperationDoc from the XML.
		SmartPtrCMgmtInvokeOperationDoc MGMTTYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
