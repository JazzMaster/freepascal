{ Parsed from Webkit.framework DOMXPathResult.h }

{$ifdef TYPES}
{$ifndef DOMXPATHRESULT_PAS_T}
{$define DOMXPATHRESULT_PAS_T}

{ Constants }

const
  DOM_ANY_TYPE = 0;
  DOM_NUMBER_TYPE = 1;
  DOM_STRING_TYPE = 2;
  DOM_BOOL_TYPE = 3;
  DOM_UNORDERED_NODE_ITERATOR_TYPE = 4;
  DOM_ORDERED_NODE_ITERATOR_TYPE = 5;
  DOM_UNORDERED_NODE_SNAPSHOT_TYPE = 6;
  DOM_ORDERED_NODE_SNAPSHOT_TYPE = 7;
  DOM_ANY_UNORDERED_NODE_TYPE = 8;
  DOM_FIRST_ORDERED_NODE_TYPE = 9;

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef DOMXPATHRESULT_PAS_R}
{$define DOMXPATHRESULT_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef DOMXPATHRESULT_PAS_F}
{$define DOMXPATHRESULT_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef DOMXPATHRESULT_PAS_S}
{$define DOMXPATHRESULT_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  DOMXPathResult = objcclass;
  DOMXPathResultPointer = ^DOMXPathResult;
  DOMXPathResultPtr = DOMXPathResultPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef DOMXPATHRESULT_PAS_C}
{$define DOMXPATHRESULT_PAS_C}

{ DOMXPathResult }
  DOMXPathResult = objcclass external (DOMObject)
    
  public
    function resultType: cuint; message 'resultType';
    function numberValue: double; message 'numberValue';
    function stringValue: NSString; message 'stringValue';
    function BOOLValue: BOOL; message 'BOOLValue';
    function singleNodeValue: DOMNode; message 'singleNodeValue';
    function invalidIteratorState: BOOL; message 'invalidIteratorState';
    function snapshotLength: cuint; message 'snapshotLength';
    function iterateNext: DOMNode; message 'iterateNext';
    function snapshotItem(index: cuint): DOMNode; message 'snapshotItem:';
  end;

{$endif}
{$endif}
