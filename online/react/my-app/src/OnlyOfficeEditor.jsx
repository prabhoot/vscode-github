import React, { useEffect, useState } from 'react';
import axios from 'axios';

const OnlyOfficeEditor = () => {
  const [documentData, setDocumentData] = useState(null);

  useEffect(() => {
    // Fetch your document data from your server or storage
    axios.get('your-document-url')
      .then((response) => {
        setDocumentData(response.data);
      })
      .catch((error) => {
        console.error('Error fetching document data:', error);
      });
  }, []);

  return (
    <div>
      {documentData && (
        <iframe
          title="ONLYOFFICE Editor"
          src={`https://example.onlyoffice.com/editors/iframeeditor?document=${encodeURIComponent(
            documentData.url
          )}&client_id=${process.env.REACT_APP_ONLYOFFICE_CLIENT_ID}`}
          frameBorder="0"
          width="100%"
          height="600"
        ></iframe>
      )}
    </div>
  );
};

export default OnlyOfficeEditor;
