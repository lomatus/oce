#include <RWStepAP214_RWAutoDesignDocumentReference.ixx>

#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepAP214_HArray1OfAutoDesignReferencingItem.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>


RWStepAP214_RWAutoDesignDocumentReference::RWStepAP214_RWAutoDesignDocumentReference  ()    {  }

void  RWStepAP214_RWAutoDesignDocumentReference::ReadStep
  (const Handle(StepData_StepReaderData)& data,
   const Standard_Integer num,
   Handle(Interface_Check)& ach,
   const Handle(StepAP214_AutoDesignDocumentReference)& ent) const
{
	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"auto_deesign_document_reference")) return;

	// --- inherited field : assigned_document

	Handle(StepBasic_Document) adoc;
	data->ReadEntity(num, 1,"assigned_document", ach, STANDARD_TYPE(StepBasic_Document), adoc);

	// --- inherited field : source ---

	Handle(TCollection_HAsciiString) asource;
	data->ReadString (num,2,"source",ach,asource);


        // --- own field : items ---
 
        Handle(StepAP214_HArray1OfAutoDesignReferencingItem) aItems;
	StepAP214_AutoDesignReferencingItem anItem;
        Standard_Integer nsub3;
        if (data->ReadSubList (num,3,"items",ach,nsub3)) {
          Standard_Integer nb3 = data->NbParams(nsub3);
          aItems = new StepAP214_HArray1OfAutoDesignReferencingItem (1, nb3);
          for (Standard_Integer i3 = 1; i3 <= nb3; i3 ++) {
            Standard_Boolean stat3 = data->ReadEntity
              (nsub3, i3,"item", ach, anItem);
              if (stat3) aItems->SetValue(i3, anItem);
	  }
        }

        //--- Initialisation of the read entity ---

	ent->Init (adoc,asource,aItems);
}

void RWStepAP214_RWAutoDesignDocumentReference::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepAP214_AutoDesignDocumentReference)& ent) const
{

	// --- inherited field : assigned_document ---

	SW.Send(ent->AssignedDocument());

	// --- inherited field : source ---

	SW.Send(ent->Source());

	// --- own field : items ---

        SW.OpenSub();
        for (Standard_Integer i3 = 1;  i3 <= ent->NbItems();  i3 ++) {
          SW.Send(ent->ItemsValue(i3).Value());
        }
        SW.CloseSub();
}


void RWStepAP214_RWAutoDesignDocumentReference::Share(const Handle(StepAP214_AutoDesignDocumentReference)& ent, Interface_EntityIterator& iter) const
{
  iter.AddItem (ent->AssignedDocument());
  for (Standard_Integer i3 = 1;  i3 <= ent->NbItems();  i3 ++)
    iter.AddItem (ent->ItemsValue(i3).Value());
}
